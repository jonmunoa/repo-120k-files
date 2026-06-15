// fichero 49613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49613;

Registro49613 crear_registro49613(int id) {
    Registro49613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
