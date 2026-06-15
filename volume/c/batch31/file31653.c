// fichero 31653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31653;

Registro31653 crear_registro31653(int id) {
    Registro31653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
