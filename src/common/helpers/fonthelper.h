/**************************************************************************************
**
** Copyright (C) 2014 Files Drag & Drop
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License as published by the Free Software Foundation; either
** version 2.1 of the License, or (at your option) any later version.
**
** This library is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
** Lesser General Public License for more details.
**
** You should have received a copy of the GNU Lesser General Public
** License along with this library; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
**
**************************************************************************************/

#ifndef FONTHELPER_H
#define FONTHELPER_H

#include <QString>
#include <QFont>

/**
 * @class FontHelper
 *
 * Managethe fonts
 */
class FontHelper
{
public:
    /// Constructor
    FontHelper();

    /**
     * Load a font from a TTF file
     *
     * @param fontFile Path of the font file (usually in the qrc)
     * @return The loaded font
     */
    static QFont fontFromFile(const QString &fontFile);
};

#endif // FONTHELPER_H
