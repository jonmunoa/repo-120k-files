// fichero 33573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33573;

Registro33573 crear_registro33573(int id) {
    Registro33573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
