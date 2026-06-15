// fichero 18405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18405;

Registro18405 crear_registro18405(int id) {
    Registro18405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
