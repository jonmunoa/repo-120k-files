// fichero 30189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30189;

Registro30189 crear_registro30189(int id) {
    Registro30189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
