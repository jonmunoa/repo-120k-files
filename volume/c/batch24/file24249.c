// fichero 24249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24249;

Registro24249 crear_registro24249(int id) {
    Registro24249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
