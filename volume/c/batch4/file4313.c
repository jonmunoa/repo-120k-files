// fichero 4313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4313;

Registro4313 crear_registro4313(int id) {
    Registro4313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
