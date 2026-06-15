// fichero 2469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2469;

Registro2469 crear_registro2469(int id) {
    Registro2469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
