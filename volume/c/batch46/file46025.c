// fichero 46025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46025;

Registro46025 crear_registro46025(int id) {
    Registro46025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
