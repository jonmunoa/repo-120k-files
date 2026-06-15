// fichero 33373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33373;

Registro33373 crear_registro33373(int id) {
    Registro33373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
