// fichero 36341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36341;

Registro36341 crear_registro36341(int id) {
    Registro36341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
