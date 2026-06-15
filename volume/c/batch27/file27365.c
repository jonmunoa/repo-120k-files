// fichero 27365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27365;

Registro27365 crear_registro27365(int id) {
    Registro27365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
