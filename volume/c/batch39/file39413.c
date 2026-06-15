// fichero 39413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39413;

Registro39413 crear_registro39413(int id) {
    Registro39413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
