// fichero 20377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20377;

Registro20377 crear_registro20377(int id) {
    Registro20377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
