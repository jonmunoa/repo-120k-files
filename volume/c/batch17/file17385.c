// fichero 17385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17385;

Registro17385 crear_registro17385(int id) {
    Registro17385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
