// fichero 33865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33865;

Registro33865 crear_registro33865(int id) {
    Registro33865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
