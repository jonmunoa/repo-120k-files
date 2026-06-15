// fichero 29365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29365;

Registro29365 crear_registro29365(int id) {
    Registro29365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
