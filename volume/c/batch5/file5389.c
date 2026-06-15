// fichero 5389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5389;

Registro5389 crear_registro5389(int id) {
    Registro5389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
