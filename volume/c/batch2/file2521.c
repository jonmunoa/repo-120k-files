// fichero 2521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2521;

Registro2521 crear_registro2521(int id) {
    Registro2521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
