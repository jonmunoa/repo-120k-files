// fichero 42793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42793;

Registro42793 crear_registro42793(int id) {
    Registro42793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
