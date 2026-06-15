// fichero 43025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43025;

Registro43025 crear_registro43025(int id) {
    Registro43025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
