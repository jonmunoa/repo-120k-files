// fichero 297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro297;

Registro297 crear_registro297(int id) {
    Registro297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
