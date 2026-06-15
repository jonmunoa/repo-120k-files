// fichero 31861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31861;

Registro31861 crear_registro31861(int id) {
    Registro31861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
