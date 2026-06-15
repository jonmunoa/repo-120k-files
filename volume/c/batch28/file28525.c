// fichero 28525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28525;

Registro28525 crear_registro28525(int id) {
    Registro28525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
