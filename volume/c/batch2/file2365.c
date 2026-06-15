// fichero 2365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2365;

Registro2365 crear_registro2365(int id) {
    Registro2365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
