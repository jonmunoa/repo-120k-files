// fichero 22249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22249;

Registro22249 crear_registro22249(int id) {
    Registro22249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
