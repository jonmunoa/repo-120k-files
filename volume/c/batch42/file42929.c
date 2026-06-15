// fichero 42929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42929;

Registro42929 crear_registro42929(int id) {
    Registro42929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
