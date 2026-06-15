// fichero 24373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24373;

Registro24373 crear_registro24373(int id) {
    Registro24373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
