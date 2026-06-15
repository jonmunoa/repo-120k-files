// fichero 21265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21265;

Registro21265 crear_registro21265(int id) {
    Registro21265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
