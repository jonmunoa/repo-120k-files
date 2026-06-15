// fichero 10945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10945;

Registro10945 crear_registro10945(int id) {
    Registro10945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
