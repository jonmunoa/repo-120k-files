// fichero 22709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22709;

Registro22709 crear_registro22709(int id) {
    Registro22709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
