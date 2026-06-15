// fichero 105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro105;

Registro105 crear_registro105(int id) {
    Registro105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
