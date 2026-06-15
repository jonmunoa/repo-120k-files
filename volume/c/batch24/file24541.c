// fichero 24541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24541;

Registro24541 crear_registro24541(int id) {
    Registro24541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
