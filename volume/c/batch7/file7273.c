// fichero 7273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7273;

Registro7273 crear_registro7273(int id) {
    Registro7273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
