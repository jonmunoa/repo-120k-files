// fichero 47189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47189;

Registro47189 crear_registro47189(int id) {
    Registro47189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
