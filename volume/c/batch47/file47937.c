// fichero 47937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47937;

Registro47937 crear_registro47937(int id) {
    Registro47937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
