// fichero 15725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15725;

Registro15725 crear_registro15725(int id) {
    Registro15725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
