// fichero 14801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14801;

Registro14801 crear_registro14801(int id) {
    Registro14801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
