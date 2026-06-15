// fichero 33145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33145;

Registro33145 crear_registro33145(int id) {
    Registro33145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
