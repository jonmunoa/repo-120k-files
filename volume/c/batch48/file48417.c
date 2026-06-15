// fichero 48417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48417;

Registro48417 crear_registro48417(int id) {
    Registro48417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
