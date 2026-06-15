// fichero 26413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26413;

Registro26413 crear_registro26413(int id) {
    Registro26413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
