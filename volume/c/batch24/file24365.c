// fichero 24365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24365;

Registro24365 crear_registro24365(int id) {
    Registro24365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
