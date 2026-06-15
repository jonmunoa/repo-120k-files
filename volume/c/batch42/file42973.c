// fichero 42973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42973;

Registro42973 crear_registro42973(int id) {
    Registro42973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
