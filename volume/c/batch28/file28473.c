// fichero 28473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28473;

Registro28473 crear_registro28473(int id) {
    Registro28473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
