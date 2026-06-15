// fichero 46801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46801;

Registro46801 crear_registro46801(int id) {
    Registro46801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
