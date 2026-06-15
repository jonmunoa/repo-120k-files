// fichero 44449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44449;

Registro44449 crear_registro44449(int id) {
    Registro44449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
