// fichero 37101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37101;

Registro37101 crear_registro37101(int id) {
    Registro37101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
