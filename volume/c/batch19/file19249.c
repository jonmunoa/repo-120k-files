// fichero 19249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19249;

Registro19249 crear_registro19249(int id) {
    Registro19249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
