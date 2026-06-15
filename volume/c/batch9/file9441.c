// fichero 9441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9441;

Registro9441 crear_registro9441(int id) {
    Registro9441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
