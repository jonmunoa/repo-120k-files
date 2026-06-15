// fichero 26405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26405;

Registro26405 crear_registro26405(int id) {
    Registro26405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
