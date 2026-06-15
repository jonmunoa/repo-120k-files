// fichero 3525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3525;

Registro3525 crear_registro3525(int id) {
    Registro3525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
