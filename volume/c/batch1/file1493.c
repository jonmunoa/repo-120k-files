// fichero 1493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1493;

Registro1493 crear_registro1493(int id) {
    Registro1493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
