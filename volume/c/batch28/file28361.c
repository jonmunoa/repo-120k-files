// fichero 28361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28361;

Registro28361 crear_registro28361(int id) {
    Registro28361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
