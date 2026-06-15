// fichero 4245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4245;

Registro4245 crear_registro4245(int id) {
    Registro4245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
