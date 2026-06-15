// fichero 17245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17245;

Registro17245 crear_registro17245(int id) {
    Registro17245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
