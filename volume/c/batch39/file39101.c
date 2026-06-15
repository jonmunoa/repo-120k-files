// fichero 39101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39101;

Registro39101 crear_registro39101(int id) {
    Registro39101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
