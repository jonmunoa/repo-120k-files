// fichero 45253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45253;

Registro45253 crear_registro45253(int id) {
    Registro45253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
