// fichero 36273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36273;

Registro36273 crear_registro36273(int id) {
    Registro36273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
