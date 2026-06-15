// fichero 6345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6345;

Registro6345 crear_registro6345(int id) {
    Registro6345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
