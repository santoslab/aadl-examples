package hamr.SW

import art.{ArtNative_Ext, Empty}
import hamr._
import org.sireum._

// the contents of this file will not be overwritten
class SW_Impl_Instance_MON_REQ_CASE_Monitor_Req_Test extends BridgeTestSuite[CASE_Monitor_Req_thr_Impl_Bridge](Arch.SW_Impl_Instance_MON_REQ_CASE_Monitor_Req) {
  test("Example Unit Test"){
    executeTest()
  }

  //////////////////////
  // HELPER FUNCTIONS //
  //////////////////////

  // setter for in EventDataPort
  def put_observed(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.observed_Id, Base_Types.Bits_Payload(value))
  }

  // setter for in EventDataPort
  def put_reference_1(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.api.reference_1_Id, Base_Types.Bits_Payload(value))
  }

  def getComponent(): CASE_Monitor_Req_thr_Impl_Impl = {
    return bridge.entryPoints.asInstanceOf[CASE_Monitor_Req_thr_Impl_Bridge.EntryPoints].component
  }
}
