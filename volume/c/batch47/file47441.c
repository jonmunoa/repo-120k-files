// fichero 47441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47441;

Registro47441 crear_registro47441(int id) {
    Registro47441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
