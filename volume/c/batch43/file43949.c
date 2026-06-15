// fichero 43949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43949;

Registro43949 crear_registro43949(int id) {
    Registro43949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
