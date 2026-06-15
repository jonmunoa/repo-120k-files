// fichero 30965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30965;

Registro30965 crear_registro30965(int id) {
    Registro30965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
