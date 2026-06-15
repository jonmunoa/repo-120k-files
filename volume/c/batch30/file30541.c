// fichero 30541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30541;

Registro30541 crear_registro30541(int id) {
    Registro30541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
