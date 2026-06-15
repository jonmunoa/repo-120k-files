// fichero 30625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30625;

Registro30625 crear_registro30625(int id) {
    Registro30625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
