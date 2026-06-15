// fichero 21049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21049;

Registro21049 crear_registro21049(int id) {
    Registro21049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
