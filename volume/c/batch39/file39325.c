// fichero 39325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39325;

Registro39325 crear_registro39325(int id) {
    Registro39325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
