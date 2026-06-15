// fichero 46449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46449;

Registro46449 crear_registro46449(int id) {
    Registro46449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
