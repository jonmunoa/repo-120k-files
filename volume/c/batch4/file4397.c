// fichero 4397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4397;

Registro4397 crear_registro4397(int id) {
    Registro4397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
