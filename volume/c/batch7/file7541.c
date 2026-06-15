// fichero 7541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7541;

Registro7541 crear_registro7541(int id) {
    Registro7541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
