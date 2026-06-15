// fichero 13025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13025;

Registro13025 crear_registro13025(int id) {
    Registro13025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
