// fichero 4713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4713;

Registro4713 crear_registro4713(int id) {
    Registro4713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
