// fichero 18273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18273;

Registro18273 crear_registro18273(int id) {
    Registro18273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
