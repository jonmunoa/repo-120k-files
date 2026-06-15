// fichero 31889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31889;

Registro31889 crear_registro31889(int id) {
    Registro31889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
