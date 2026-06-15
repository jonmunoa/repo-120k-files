// fichero 37201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37201;

Registro37201 crear_registro37201(int id) {
    Registro37201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
