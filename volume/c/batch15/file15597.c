// fichero 15597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15597;

Registro15597 crear_registro15597(int id) {
    Registro15597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
