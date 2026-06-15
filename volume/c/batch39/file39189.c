// fichero 39189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39189;

Registro39189 crear_registro39189(int id) {
    Registro39189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
