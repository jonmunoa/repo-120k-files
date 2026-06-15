// fichero 7605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7605;

Registro7605 crear_registro7605(int id) {
    Registro7605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
