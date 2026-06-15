// fichero 4013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4013;

Registro4013 crear_registro4013(int id) {
    Registro4013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
