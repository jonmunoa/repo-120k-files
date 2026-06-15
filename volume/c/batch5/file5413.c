// fichero 5413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5413;

Registro5413 crear_registro5413(int id) {
    Registro5413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
