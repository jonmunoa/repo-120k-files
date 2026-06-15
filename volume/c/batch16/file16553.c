// fichero 16553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16553;

Registro16553 crear_registro16553(int id) {
    Registro16553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
