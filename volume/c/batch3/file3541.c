// fichero 3541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3541;

Registro3541 crear_registro3541(int id) {
    Registro3541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
