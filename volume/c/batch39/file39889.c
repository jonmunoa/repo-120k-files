// fichero 39889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39889;

Registro39889 crear_registro39889(int id) {
    Registro39889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
