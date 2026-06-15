// fichero 43745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43745;

Registro43745 crear_registro43745(int id) {
    Registro43745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
