// fichero 2537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2537;

Registro2537 crear_registro2537(int id) {
    Registro2537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
