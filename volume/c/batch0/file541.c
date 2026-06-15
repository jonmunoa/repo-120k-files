// fichero 541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro541;

Registro541 crear_registro541(int id) {
    Registro541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
