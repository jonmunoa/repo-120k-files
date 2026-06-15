// fichero 801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro801;

Registro801 crear_registro801(int id) {
    Registro801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
