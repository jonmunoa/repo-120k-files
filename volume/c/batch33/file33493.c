// fichero 33493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33493;

Registro33493 crear_registro33493(int id) {
    Registro33493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
