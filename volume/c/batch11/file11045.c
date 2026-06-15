// fichero 11045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11045;

Registro11045 crear_registro11045(int id) {
    Registro11045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
