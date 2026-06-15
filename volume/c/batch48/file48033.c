// fichero 48033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48033;

Registro48033 crear_registro48033(int id) {
    Registro48033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
