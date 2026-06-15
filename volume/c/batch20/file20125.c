// fichero 20125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20125;

Registro20125 crear_registro20125(int id) {
    Registro20125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
