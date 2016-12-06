struct FileChunk {
	1: list<byte> data
  	2: i64 newOffset
	3: i64 totalFileSize
}

service fileservice {    
   FileChunk download(1:string fileName, 2: i64 offset);
   bool upload(1:string fileName, 2: i64 currentOffset, 3: i64 totalFilesize, 4: FileChunk chunk);
}
