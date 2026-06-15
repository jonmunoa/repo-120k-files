// fichero 3761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3761;

Registro3761 crear_registro3761(int id) {
    Registro3761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
