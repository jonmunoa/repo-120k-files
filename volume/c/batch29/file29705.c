// fichero 29705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29705;

Registro29705 crear_registro29705(int id) {
    Registro29705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
