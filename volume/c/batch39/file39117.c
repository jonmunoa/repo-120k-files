// fichero 39117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39117;

Registro39117 crear_registro39117(int id) {
    Registro39117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
