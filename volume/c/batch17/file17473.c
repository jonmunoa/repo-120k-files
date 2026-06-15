// fichero 17473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17473;

Registro17473 crear_registro17473(int id) {
    Registro17473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
