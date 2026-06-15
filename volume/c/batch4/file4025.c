// fichero 4025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4025;

Registro4025 crear_registro4025(int id) {
    Registro4025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
