// fichero 39241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39241;

Registro39241 crear_registro39241(int id) {
    Registro39241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
