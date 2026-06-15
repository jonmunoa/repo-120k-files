// fichero 16817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16817;

Registro16817 crear_registro16817(int id) {
    Registro16817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
