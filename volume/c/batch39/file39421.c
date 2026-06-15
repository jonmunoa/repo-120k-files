// fichero 39421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39421;

Registro39421 crear_registro39421(int id) {
    Registro39421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
