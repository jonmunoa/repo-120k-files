// fichero 29433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29433;

Registro29433 crear_registro29433(int id) {
    Registro29433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
