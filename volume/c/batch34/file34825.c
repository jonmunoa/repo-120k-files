// fichero 34825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34825;

Registro34825 crear_registro34825(int id) {
    Registro34825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
