/*
 * Copyright (C) 2003-2011 The Music Player Daemon Project
 * http://www.musicpd.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

/** \file
 *
 * This header provides "extern" declarations for all mixer plugins.
 */

#ifndef MPD_MIXER_LIST_H
#define MPD_MIXER_LIST_H

extern const struct mixer_plugin software_mixer_plugin;
extern const struct mixer_plugin alsa_mixer_plugin;
extern const struct mixer_plugin oss_mixer_plugin;
extern const struct mixer_plugin roar_mixer_plugin;
extern const struct mixer_plugin pulse_mixer_plugin;
extern const struct mixer_plugin raop_mixer_plugin;
extern const struct mixer_plugin winmm_mixer_plugin;

#endif
