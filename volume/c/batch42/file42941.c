// fichero 42941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42941;

Registro42941 crear_registro42941(int id) {
    Registro42941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
