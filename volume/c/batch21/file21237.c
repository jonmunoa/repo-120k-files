// fichero 21237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21237;

Registro21237 crear_registro21237(int id) {
    Registro21237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
