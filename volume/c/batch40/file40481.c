// fichero 40481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40481;

Registro40481 crear_registro40481(int id) {
    Registro40481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
