// fichero 27405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27405;

Registro27405 crear_registro27405(int id) {
    Registro27405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
