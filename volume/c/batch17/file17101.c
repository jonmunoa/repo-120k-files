// fichero 17101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17101;

Registro17101 crear_registro17101(int id) {
    Registro17101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
