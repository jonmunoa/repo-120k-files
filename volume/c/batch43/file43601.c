// fichero 43601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43601;

Registro43601 crear_registro43601(int id) {
    Registro43601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
