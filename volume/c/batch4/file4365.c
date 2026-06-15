// fichero 4365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4365;

Registro4365 crear_registro4365(int id) {
    Registro4365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
