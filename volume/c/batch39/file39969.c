// fichero 39969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39969;

Registro39969 crear_registro39969(int id) {
    Registro39969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
