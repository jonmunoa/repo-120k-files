// fichero 43713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43713;

Registro43713 crear_registro43713(int id) {
    Registro43713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
