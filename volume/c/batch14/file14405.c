// fichero 14405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14405;

Registro14405 crear_registro14405(int id) {
    Registro14405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
