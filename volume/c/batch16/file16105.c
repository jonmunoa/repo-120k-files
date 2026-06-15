// fichero 16105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16105;

Registro16105 crear_registro16105(int id) {
    Registro16105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
