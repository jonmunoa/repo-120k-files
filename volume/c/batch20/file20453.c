// fichero 20453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20453;

Registro20453 crear_registro20453(int id) {
    Registro20453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
