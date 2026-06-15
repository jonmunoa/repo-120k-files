// fichero 37249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37249;

Registro37249 crear_registro37249(int id) {
    Registro37249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
