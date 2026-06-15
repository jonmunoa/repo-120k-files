// fichero 25693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25693;

Registro25693 crear_registro25693(int id) {
    Registro25693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
