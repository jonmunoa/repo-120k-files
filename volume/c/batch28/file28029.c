// fichero 28029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28029;

Registro28029 crear_registro28029(int id) {
    Registro28029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
