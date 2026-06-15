// fichero 39185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39185;

Registro39185 crear_registro39185(int id) {
    Registro39185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
