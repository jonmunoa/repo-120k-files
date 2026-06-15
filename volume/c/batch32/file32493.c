// fichero 32493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32493;

Registro32493 crear_registro32493(int id) {
    Registro32493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
