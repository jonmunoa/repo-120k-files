// fichero 31373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31373;

Registro31373 crear_registro31373(int id) {
    Registro31373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
