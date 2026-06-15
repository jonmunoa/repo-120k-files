// fichero 38621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38621;

Registro38621 crear_registro38621(int id) {
    Registro38621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
