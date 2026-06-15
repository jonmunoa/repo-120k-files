// fichero 3409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3409;

Registro3409 crear_registro3409(int id) {
    Registro3409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
