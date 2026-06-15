// fichero 39165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39165;

Registro39165 crear_registro39165(int id) {
    Registro39165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
