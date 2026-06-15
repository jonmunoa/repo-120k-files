// fichero 19345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19345;

Registro19345 crear_registro19345(int id) {
    Registro19345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
