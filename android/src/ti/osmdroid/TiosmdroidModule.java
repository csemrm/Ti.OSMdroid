/**
 * This file was auto-generated by the Titanium Module SDK helper for Android
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 */
package ti.osmdroid;

import org.appcelerator.kroll.KrollModule;
import org.appcelerator.kroll.annotations.Kroll;

import org.appcelerator.titanium.TiApplication;
import org.appcelerator.kroll.common.Log;
import org.appcelerator.kroll.common.TiConfig;


@Kroll.module(name="Tiosmdroid", id="ti.osmdroid")
public class TiosmdroidModule extends KrollModule {
	@Kroll.constant
	public static final int BASE_OVERLAY_NL = 0;
	@Kroll.constant
    public static final int CLOUDMADESMALLTILES = 1; // this is default
    @Kroll.constant
    public static final int CLOUDMADESTANDARDTILES = 2;
    @Kroll.constant
    public static final int CYCLEMAP = 3;
    @Kroll.constant
    public static final int DEFAULT_TILE_SOURCE = 4;
	@Kroll.constant
    public static final int FIETS_OVERLAY_NL = 5;
    @Kroll.constant
    public static final int MAPNIK = 6;
	@Kroll.constant
    public static final int MAPQUESTAERIAL = 7;
    @Kroll.constant
    public static final int MAPQUESTAERIAL_US = 8;
    @Kroll.constant
    public static final int MAPQUESTOSM = 9;
    @Kroll.constant
    public static final int PUBLIC_TRANSPORT = 10;
    @Kroll.constant
    public static final int ROADS_OVERLAY_NL = 11;

	// Standard Debugging variables
	private static final String LCAT = "TiOSM";
	private static final boolean DBG = TiConfig.LOGD;

	public TiosmdroidModule() {
		super();
	}

	@Kroll.onAppCreate
	public static void onAppCreate(TiApplication app) {
		Log.d(LCAT, "inside onAppCreate");
		// put module init code that needs to run when the application is created
	}


}

