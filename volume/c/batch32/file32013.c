// fichero 32013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32013;

Registro32013 crear_registro32013(int id) {
    Registro32013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
