// fichero 24597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24597;

Registro24597 crear_registro24597(int id) {
    Registro24597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
