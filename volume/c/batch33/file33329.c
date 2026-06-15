// fichero 33329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33329;

Registro33329 crear_registro33329(int id) {
    Registro33329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
