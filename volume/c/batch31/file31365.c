// fichero 31365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31365;

Registro31365 crear_registro31365(int id) {
    Registro31365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
