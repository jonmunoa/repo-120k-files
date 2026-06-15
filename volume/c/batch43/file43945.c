// fichero 43945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43945;

Registro43945 crear_registro43945(int id) {
    Registro43945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
