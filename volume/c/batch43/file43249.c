// fichero 43249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43249;

Registro43249 crear_registro43249(int id) {
    Registro43249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
