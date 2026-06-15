// fichero 4493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4493;

Registro4493 crear_registro4493(int id) {
    Registro4493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
