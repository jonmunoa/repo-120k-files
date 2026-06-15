// fichero 29677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29677;

Registro29677 crear_registro29677(int id) {
    Registro29677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
