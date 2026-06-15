// fichero 25553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25553;

Registro25553 crear_registro25553(int id) {
    Registro25553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
