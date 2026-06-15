// fichero 5317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5317;

Registro5317 crear_registro5317(int id) {
    Registro5317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
