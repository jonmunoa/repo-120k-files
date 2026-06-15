// fichero 46709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46709;

Registro46709 crear_registro46709(int id) {
    Registro46709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
