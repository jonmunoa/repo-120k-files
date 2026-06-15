// fichero 5453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5453;

Registro5453 crear_registro5453(int id) {
    Registro5453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
