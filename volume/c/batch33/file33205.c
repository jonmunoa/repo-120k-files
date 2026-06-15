// fichero 33205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33205;

Registro33205 crear_registro33205(int id) {
    Registro33205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
