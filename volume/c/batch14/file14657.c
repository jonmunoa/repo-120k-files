// fichero 14657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14657;

Registro14657 crear_registro14657(int id) {
    Registro14657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
