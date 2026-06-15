// fichero 28449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28449;

Registro28449 crear_registro28449(int id) {
    Registro28449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
