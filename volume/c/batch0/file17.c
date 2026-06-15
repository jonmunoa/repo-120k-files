// fichero 17 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17;

Registro17 crear_registro17(int id) {
    Registro17 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
