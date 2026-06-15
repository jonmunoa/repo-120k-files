// fichero 42125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42125;

Registro42125 crear_registro42125(int id) {
    Registro42125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
