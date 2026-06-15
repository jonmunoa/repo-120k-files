// fichero 17449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17449;

Registro17449 crear_registro17449(int id) {
    Registro17449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
