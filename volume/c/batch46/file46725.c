// fichero 46725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46725;

Registro46725 crear_registro46725(int id) {
    Registro46725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
