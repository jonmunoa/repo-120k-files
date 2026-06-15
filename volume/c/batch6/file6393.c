// fichero 6393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6393;

Registro6393 crear_registro6393(int id) {
    Registro6393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
