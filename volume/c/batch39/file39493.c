// fichero 39493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39493;

Registro39493 crear_registro39493(int id) {
    Registro39493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
