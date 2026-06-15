// fichero 27553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27553;

Registro27553 crear_registro27553(int id) {
    Registro27553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
