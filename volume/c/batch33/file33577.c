// fichero 33577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33577;

Registro33577 crear_registro33577(int id) {
    Registro33577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
