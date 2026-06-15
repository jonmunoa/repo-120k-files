// fichero 557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro557;

Registro557 crear_registro557(int id) {
    Registro557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
