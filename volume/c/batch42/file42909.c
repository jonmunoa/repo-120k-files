// fichero 42909 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42909;

Registro42909 crear_registro42909(int id) {
    Registro42909 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
