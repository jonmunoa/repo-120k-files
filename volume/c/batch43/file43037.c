// fichero 43037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43037;

Registro43037 crear_registro43037(int id) {
    Registro43037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
