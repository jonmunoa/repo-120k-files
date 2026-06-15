// fichero 24341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24341;

Registro24341 crear_registro24341(int id) {
    Registro24341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
