// fichero 7421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7421;

Registro7421 crear_registro7421(int id) {
    Registro7421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
