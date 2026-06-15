// fichero 29573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29573;

Registro29573 crear_registro29573(int id) {
    Registro29573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
