// fichero 2497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2497;

Registro2497 crear_registro2497(int id) {
    Registro2497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
