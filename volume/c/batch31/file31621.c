// fichero 31621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31621;

Registro31621 crear_registro31621(int id) {
    Registro31621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
