// fichero 48021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48021;

Registro48021 crear_registro48021(int id) {
    Registro48021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
