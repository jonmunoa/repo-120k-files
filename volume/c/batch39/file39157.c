// fichero 39157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39157;

Registro39157 crear_registro39157(int id) {
    Registro39157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
