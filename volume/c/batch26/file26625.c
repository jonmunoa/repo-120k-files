// fichero 26625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26625;

Registro26625 crear_registro26625(int id) {
    Registro26625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
