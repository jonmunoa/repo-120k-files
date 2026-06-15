// fichero 4233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4233;

Registro4233 crear_registro4233(int id) {
    Registro4233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
