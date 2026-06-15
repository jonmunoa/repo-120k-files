// fichero 373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro373;

Registro373 crear_registro373(int id) {
    Registro373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
