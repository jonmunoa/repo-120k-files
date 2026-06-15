// fichero 27093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27093;

Registro27093 crear_registro27093(int id) {
    Registro27093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
