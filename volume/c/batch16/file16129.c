// fichero 16129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16129;

Registro16129 crear_registro16129(int id) {
    Registro16129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
