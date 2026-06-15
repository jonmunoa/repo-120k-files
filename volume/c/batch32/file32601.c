// fichero 32601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32601;

Registro32601 crear_registro32601(int id) {
    Registro32601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
