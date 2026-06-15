// fichero 42201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42201;

Registro42201 crear_registro42201(int id) {
    Registro42201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
