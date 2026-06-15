// fichero 3125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3125;

Registro3125 crear_registro3125(int id) {
    Registro3125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
