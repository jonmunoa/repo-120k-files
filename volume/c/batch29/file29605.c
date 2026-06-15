// fichero 29605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29605;

Registro29605 crear_registro29605(int id) {
    Registro29605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
