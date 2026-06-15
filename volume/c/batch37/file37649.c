// fichero 37649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37649;

Registro37649 crear_registro37649(int id) {
    Registro37649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
