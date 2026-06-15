// fichero 26113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26113;

Registro26113 crear_registro26113(int id) {
    Registro26113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
