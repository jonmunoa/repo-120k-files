// fichero 22653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22653;

Registro22653 crear_registro22653(int id) {
    Registro22653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
