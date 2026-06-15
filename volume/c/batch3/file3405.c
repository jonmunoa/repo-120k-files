// fichero 3405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3405;

Registro3405 crear_registro3405(int id) {
    Registro3405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
