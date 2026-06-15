// fichero 37209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37209;

Registro37209 crear_registro37209(int id) {
    Registro37209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
