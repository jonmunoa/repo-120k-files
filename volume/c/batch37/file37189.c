// fichero 37189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37189;

Registro37189 crear_registro37189(int id) {
    Registro37189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
