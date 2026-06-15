// fichero 46209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46209;

Registro46209 crear_registro46209(int id) {
    Registro46209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
