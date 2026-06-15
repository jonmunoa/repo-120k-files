// fichero 15177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15177;

Registro15177 crear_registro15177(int id) {
    Registro15177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
