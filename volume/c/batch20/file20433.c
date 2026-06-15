// fichero 20433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20433;

Registro20433 crear_registro20433(int id) {
    Registro20433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
