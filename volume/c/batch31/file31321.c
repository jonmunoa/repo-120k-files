// fichero 31321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31321;

Registro31321 crear_registro31321(int id) {
    Registro31321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
