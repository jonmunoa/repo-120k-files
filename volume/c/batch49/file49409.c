// fichero 49409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49409;

Registro49409 crear_registro49409(int id) {
    Registro49409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
