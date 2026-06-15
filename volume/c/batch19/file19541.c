// fichero 19541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19541;

Registro19541 crear_registro19541(int id) {
    Registro19541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
