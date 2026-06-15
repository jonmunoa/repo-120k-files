// fichero 17297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17297;

Registro17297 crear_registro17297(int id) {
    Registro17297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
