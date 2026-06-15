// fichero 5585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5585;

Registro5585 crear_registro5585(int id) {
    Registro5585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
