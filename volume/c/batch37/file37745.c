// fichero 37745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37745;

Registro37745 crear_registro37745(int id) {
    Registro37745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
