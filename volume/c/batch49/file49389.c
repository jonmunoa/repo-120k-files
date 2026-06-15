// fichero 49389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49389;

Registro49389 crear_registro49389(int id) {
    Registro49389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
