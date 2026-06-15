// fichero 38481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38481;

Registro38481 crear_registro38481(int id) {
    Registro38481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
