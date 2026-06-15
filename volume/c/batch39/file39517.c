// fichero 39517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39517;

Registro39517 crear_registro39517(int id) {
    Registro39517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
