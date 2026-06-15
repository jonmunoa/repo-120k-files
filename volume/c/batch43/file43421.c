// fichero 43421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43421;

Registro43421 crear_registro43421(int id) {
    Registro43421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
