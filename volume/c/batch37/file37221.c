// fichero 37221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37221;

Registro37221 crear_registro37221(int id) {
    Registro37221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
