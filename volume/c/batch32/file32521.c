// fichero 32521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32521;

Registro32521 crear_registro32521(int id) {
    Registro32521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
