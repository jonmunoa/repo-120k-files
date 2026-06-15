// fichero 32745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32745;

Registro32745 crear_registro32745(int id) {
    Registro32745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
