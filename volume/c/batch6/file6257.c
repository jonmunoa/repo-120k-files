// fichero 6257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6257;

Registro6257 crear_registro6257(int id) {
    Registro6257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
