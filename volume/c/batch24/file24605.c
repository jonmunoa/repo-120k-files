// fichero 24605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24605;

Registro24605 crear_registro24605(int id) {
    Registro24605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
