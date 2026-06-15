// fichero 32801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32801;

Registro32801 crear_registro32801(int id) {
    Registro32801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
