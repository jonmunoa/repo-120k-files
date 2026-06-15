// fichero 17417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17417;

Registro17417 crear_registro17417(int id) {
    Registro17417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
