// fichero 2653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2653;

Registro2653 crear_registro2653(int id) {
    Registro2653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
