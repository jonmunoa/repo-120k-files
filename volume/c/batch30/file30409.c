// fichero 30409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30409;

Registro30409 crear_registro30409(int id) {
    Registro30409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
