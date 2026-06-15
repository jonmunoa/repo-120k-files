// fichero 37845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37845;

Registro37845 crear_registro37845(int id) {
    Registro37845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
