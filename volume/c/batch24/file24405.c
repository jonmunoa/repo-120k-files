// fichero 24405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24405;

Registro24405 crear_registro24405(int id) {
    Registro24405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
