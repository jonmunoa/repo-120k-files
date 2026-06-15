// fichero 29441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29441;

Registro29441 crear_registro29441(int id) {
    Registro29441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
