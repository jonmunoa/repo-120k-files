// fichero 7037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7037;

Registro7037 crear_registro7037(int id) {
    Registro7037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
