// fichero 31885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31885;

Registro31885 crear_registro31885(int id) {
    Registro31885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
