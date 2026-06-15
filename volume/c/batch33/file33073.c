// fichero 33073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33073;

Registro33073 crear_registro33073(int id) {
    Registro33073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
