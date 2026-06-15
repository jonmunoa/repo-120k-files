// fichero 6305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6305;

Registro6305 crear_registro6305(int id) {
    Registro6305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
