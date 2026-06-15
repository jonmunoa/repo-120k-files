// fichero 39505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39505;

Registro39505 crear_registro39505(int id) {
    Registro39505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
