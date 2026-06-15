// fichero 4249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4249;

Registro4249 crear_registro4249(int id) {
    Registro4249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
