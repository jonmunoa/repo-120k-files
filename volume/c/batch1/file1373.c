// fichero 1373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1373;

Registro1373 crear_registro1373(int id) {
    Registro1373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
