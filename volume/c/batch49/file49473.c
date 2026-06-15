// fichero 49473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49473;

Registro49473 crear_registro49473(int id) {
    Registro49473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
