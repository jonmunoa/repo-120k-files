// fichero 33857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33857;

Registro33857 crear_registro33857(int id) {
    Registro33857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
