// fichero 24349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24349;

Registro24349 crear_registro24349(int id) {
    Registro24349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
