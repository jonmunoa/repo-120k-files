// fichero 5825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5825;

Registro5825 crear_registro5825(int id) {
    Registro5825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
