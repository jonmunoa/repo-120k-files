// fichero 28373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28373;

Registro28373 crear_registro28373(int id) {
    Registro28373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
