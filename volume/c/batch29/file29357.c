// fichero 29357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29357;

Registro29357 crear_registro29357(int id) {
    Registro29357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
