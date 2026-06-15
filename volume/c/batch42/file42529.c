// fichero 42529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42529;

Registro42529 crear_registro42529(int id) {
    Registro42529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
