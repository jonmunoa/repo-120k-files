// fichero 29341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29341;

Registro29341 crear_registro29341(int id) {
    Registro29341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
