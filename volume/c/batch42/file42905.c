// fichero 42905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42905;

Registro42905 crear_registro42905(int id) {
    Registro42905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
