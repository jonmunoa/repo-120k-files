// fichero 4561 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4561;

Registro4561 crear_registro4561(int id) {
    Registro4561 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
