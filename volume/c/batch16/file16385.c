// fichero 16385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16385;

Registro16385 crear_registro16385(int id) {
    Registro16385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
