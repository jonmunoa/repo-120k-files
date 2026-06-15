// fichero 32005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32005;

Registro32005 crear_registro32005(int id) {
    Registro32005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
