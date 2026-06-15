// fichero 49405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49405;

Registro49405 crear_registro49405(int id) {
    Registro49405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
