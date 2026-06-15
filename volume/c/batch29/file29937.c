// fichero 29937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29937;

Registro29937 crear_registro29937(int id) {
    Registro29937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
