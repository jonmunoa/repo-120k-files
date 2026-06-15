// fichero 24125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24125;

Registro24125 crear_registro24125(int id) {
    Registro24125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
