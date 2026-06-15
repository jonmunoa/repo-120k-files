// fichero 2573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2573;

Registro2573 crear_registro2573(int id) {
    Registro2573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
