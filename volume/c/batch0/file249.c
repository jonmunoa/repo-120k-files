// fichero 249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro249;

Registro249 crear_registro249(int id) {
    Registro249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
