// fichero 16437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16437;

Registro16437 crear_registro16437(int id) {
    Registro16437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
