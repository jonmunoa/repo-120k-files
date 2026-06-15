// fichero 47425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47425;

Registro47425 crear_registro47425(int id) {
    Registro47425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
