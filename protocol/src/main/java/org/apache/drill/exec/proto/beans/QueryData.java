/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
// Generated by http://code.google.com/p/protostuff/ ... DO NOT EDIT!
// Generated from protobuf

package org.apache.drill.exec.proto.beans;

import java.io.Externalizable;
import java.io.IOException;
import java.io.ObjectInput;
import java.io.ObjectOutput;

import com.dyuproject.protostuff.GraphIOUtil;
import com.dyuproject.protostuff.Input;
import com.dyuproject.protostuff.Message;
import com.dyuproject.protostuff.Output;
import com.dyuproject.protostuff.Schema;

public final class QueryData implements Externalizable, Message<QueryData>, Schema<QueryData>
{

    public static Schema<QueryData> getSchema()
    {
        return DEFAULT_INSTANCE;
    }

    public static QueryData getDefaultInstance()
    {
        return DEFAULT_INSTANCE;
    }

    static final QueryData DEFAULT_INSTANCE = new QueryData();

    
    private QueryId queryId;
    private int rowCount;
    private RecordBatchDef def;

    public QueryData()
    {
        
    }

    // getters and setters

    // queryId

    public QueryId getQueryId()
    {
        return queryId;
    }

    public QueryData setQueryId(QueryId queryId)
    {
        this.queryId = queryId;
        return this;
    }

    // rowCount

    public int getRowCount()
    {
        return rowCount;
    }

    public QueryData setRowCount(int rowCount)
    {
        this.rowCount = rowCount;
        return this;
    }

    // def

    public RecordBatchDef getDef()
    {
        return def;
    }

    public QueryData setDef(RecordBatchDef def)
    {
        this.def = def;
        return this;
    }

    // java serialization

    public void readExternal(ObjectInput in) throws IOException
    {
        GraphIOUtil.mergeDelimitedFrom(in, this, this);
    }

    public void writeExternal(ObjectOutput out) throws IOException
    {
        GraphIOUtil.writeDelimitedTo(out, this, this);
    }

    // message method

    public Schema<QueryData> cachedSchema()
    {
        return DEFAULT_INSTANCE;
    }

    // schema methods

    public QueryData newMessage()
    {
        return new QueryData();
    }

    public Class<QueryData> typeClass()
    {
        return QueryData.class;
    }

    public String messageName()
    {
        return QueryData.class.getSimpleName();
    }

    public String messageFullName()
    {
        return QueryData.class.getName();
    }

    public boolean isInitialized(QueryData message)
    {
        return true;
    }

    public void mergeFrom(Input input, QueryData message) throws IOException
    {
        for(int number = input.readFieldNumber(this);; number = input.readFieldNumber(this))
        {
            switch(number)
            {
                case 0:
                    return;
                case 1:
                    message.queryId = input.mergeObject(message.queryId, QueryId.getSchema());
                    break;

                case 2:
                    message.rowCount = input.readInt32();
                    break;
                case 3:
                    message.def = input.mergeObject(message.def, RecordBatchDef.getSchema());
                    break;

                default:
                    input.handleUnknownField(number, this);
            }   
        }
    }


    public void writeTo(Output output, QueryData message) throws IOException
    {
        if(message.queryId != null)
             output.writeObject(1, message.queryId, QueryId.getSchema(), false);


        if(message.rowCount != 0)
            output.writeInt32(2, message.rowCount, false);

        if(message.def != null)
             output.writeObject(3, message.def, RecordBatchDef.getSchema(), false);

    }

    public String getFieldName(int number)
    {
        switch(number)
        {
            case 1: return "queryId";
            case 2: return "rowCount";
            case 3: return "def";
            default: return null;
        }
    }

    public int getFieldNumber(String name)
    {
        final Integer number = __fieldMap.get(name);
        return number == null ? 0 : number.intValue();
    }

    private static final java.util.HashMap<String,Integer> __fieldMap = new java.util.HashMap<String,Integer>();
    static
    {
        __fieldMap.put("queryId", 1);
        __fieldMap.put("rowCount", 2);
        __fieldMap.put("def", 3);
    }
    
}