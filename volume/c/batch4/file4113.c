// fichero 4113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4113;

Registro4113 crear_registro4113(int id) {
    Registro4113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
