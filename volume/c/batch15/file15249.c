// fichero 15249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15249;

Registro15249 crear_registro15249(int id) {
    Registro15249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
