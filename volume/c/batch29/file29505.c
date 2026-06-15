// fichero 29505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29505;

Registro29505 crear_registro29505(int id) {
    Registro29505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
