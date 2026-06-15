// fichero 37453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37453;

Registro37453 crear_registro37453(int id) {
    Registro37453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
