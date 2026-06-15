// fichero 17249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17249;

Registro17249 crear_registro17249(int id) {
    Registro17249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
