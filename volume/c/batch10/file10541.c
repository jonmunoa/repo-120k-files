// fichero 10541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10541;

Registro10541 crear_registro10541(int id) {
    Registro10541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
