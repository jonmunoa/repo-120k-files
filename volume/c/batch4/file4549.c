// fichero 4549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4549;

Registro4549 crear_registro4549(int id) {
    Registro4549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
