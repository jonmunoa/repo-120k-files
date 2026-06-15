// fichero 4145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4145;

Registro4145 crear_registro4145(int id) {
    Registro4145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
