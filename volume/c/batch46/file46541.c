// fichero 46541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46541;

Registro46541 crear_registro46541(int id) {
    Registro46541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
