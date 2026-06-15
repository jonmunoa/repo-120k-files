// fichero 7017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7017;

Registro7017 crear_registro7017(int id) {
    Registro7017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
