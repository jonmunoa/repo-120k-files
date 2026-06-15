// fichero 39253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39253;

Registro39253 crear_registro39253(int id) {
    Registro39253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
