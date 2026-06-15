// fichero 14185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14185;

Registro14185 crear_registro14185(int id) {
    Registro14185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
