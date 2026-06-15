// fichero 39081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39081;

Registro39081 crear_registro39081(int id) {
    Registro39081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
