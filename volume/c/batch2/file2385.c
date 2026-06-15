// fichero 2385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2385;

Registro2385 crear_registro2385(int id) {
    Registro2385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
