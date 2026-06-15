// fichero 18341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18341;

Registro18341 crear_registro18341(int id) {
    Registro18341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
