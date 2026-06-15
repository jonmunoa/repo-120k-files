// fichero 34341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34341;

Registro34341 crear_registro34341(int id) {
    Registro34341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
