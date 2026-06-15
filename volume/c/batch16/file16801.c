// fichero 16801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16801;

Registro16801 crear_registro16801(int id) {
    Registro16801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
