// fichero 3253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3253;

Registro3253 crear_registro3253(int id) {
    Registro3253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
