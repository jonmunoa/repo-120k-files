// fichero 16541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16541;

Registro16541 crear_registro16541(int id) {
    Registro16541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
