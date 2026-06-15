// fichero 17797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17797;

Registro17797 crear_registro17797(int id) {
    Registro17797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
