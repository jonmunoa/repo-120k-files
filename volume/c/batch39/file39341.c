// fichero 39341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39341;

Registro39341 crear_registro39341(int id) {
    Registro39341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
