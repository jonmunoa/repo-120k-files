// fichero 26453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26453;

Registro26453 crear_registro26453(int id) {
    Registro26453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
