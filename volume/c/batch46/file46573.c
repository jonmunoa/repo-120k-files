// fichero 46573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46573;

Registro46573 crear_registro46573(int id) {
    Registro46573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
