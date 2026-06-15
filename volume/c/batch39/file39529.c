// fichero 39529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39529;

Registro39529 crear_registro39529(int id) {
    Registro39529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
