// fichero 32617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32617;

Registro32617 crear_registro32617(int id) {
    Registro32617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
