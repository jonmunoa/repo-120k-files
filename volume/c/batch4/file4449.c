// fichero 4449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4449;

Registro4449 crear_registro4449(int id) {
    Registro4449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
