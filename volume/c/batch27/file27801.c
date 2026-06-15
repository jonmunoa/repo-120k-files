// fichero 27801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27801;

Registro27801 crear_registro27801(int id) {
    Registro27801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
