// fichero 33385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33385;

Registro33385 crear_registro33385(int id) {
    Registro33385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
