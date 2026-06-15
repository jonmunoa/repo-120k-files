// fichero 29201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29201;

Registro29201 crear_registro29201(int id) {
    Registro29201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
