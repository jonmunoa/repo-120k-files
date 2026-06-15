// fichero 33749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33749;

Registro33749 crear_registro33749(int id) {
    Registro33749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
