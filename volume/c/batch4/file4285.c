// fichero 4285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4285;

Registro4285 crear_registro4285(int id) {
    Registro4285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
