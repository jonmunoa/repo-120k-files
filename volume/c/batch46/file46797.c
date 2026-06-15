// fichero 46797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46797;

Registro46797 crear_registro46797(int id) {
    Registro46797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
