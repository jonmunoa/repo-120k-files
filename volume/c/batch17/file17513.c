// fichero 17513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17513;

Registro17513 crear_registro17513(int id) {
    Registro17513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
