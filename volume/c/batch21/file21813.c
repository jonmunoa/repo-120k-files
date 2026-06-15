// fichero 21813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21813;

Registro21813 crear_registro21813(int id) {
    Registro21813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
