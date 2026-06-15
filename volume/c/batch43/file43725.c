// fichero 43725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43725;

Registro43725 crear_registro43725(int id) {
    Registro43725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
