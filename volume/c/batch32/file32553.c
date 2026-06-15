// fichero 32553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32553;

Registro32553 crear_registro32553(int id) {
    Registro32553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
