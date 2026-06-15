// fichero 37005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37005;

Registro37005 crear_registro37005(int id) {
    Registro37005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
