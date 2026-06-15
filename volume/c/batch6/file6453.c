// fichero 6453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6453;

Registro6453 crear_registro6453(int id) {
    Registro6453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
