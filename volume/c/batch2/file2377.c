// fichero 2377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2377;

Registro2377 crear_registro2377(int id) {
    Registro2377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
