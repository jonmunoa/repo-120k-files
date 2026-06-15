// fichero 38825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38825;

Registro38825 crear_registro38825(int id) {
    Registro38825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
