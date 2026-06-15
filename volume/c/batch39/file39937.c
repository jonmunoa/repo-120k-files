// fichero 39937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39937;

Registro39937 crear_registro39937(int id) {
    Registro39937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
