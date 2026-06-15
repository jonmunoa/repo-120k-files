// fichero 4761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4761;

Registro4761 crear_registro4761(int id) {
    Registro4761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
