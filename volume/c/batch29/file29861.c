// fichero 29861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29861;

Registro29861 crear_registro29861(int id) {
    Registro29861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
