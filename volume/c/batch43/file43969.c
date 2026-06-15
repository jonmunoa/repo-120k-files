// fichero 43969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43969;

Registro43969 crear_registro43969(int id) {
    Registro43969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
