// fichero 14533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14533;

Registro14533 crear_registro14533(int id) {
    Registro14533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
