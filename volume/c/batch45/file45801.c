// fichero 45801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45801;

Registro45801 crear_registro45801(int id) {
    Registro45801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
