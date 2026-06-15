// fichero 30361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30361;

Registro30361 crear_registro30361(int id) {
    Registro30361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
