// fichero 34525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34525;

Registro34525 crear_registro34525(int id) {
    Registro34525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
