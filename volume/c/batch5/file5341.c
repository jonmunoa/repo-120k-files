// fichero 5341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5341;

Registro5341 crear_registro5341(int id) {
    Registro5341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
