// fichero 22493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22493;

Registro22493 crear_registro22493(int id) {
    Registro22493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
