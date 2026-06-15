// fichero 36329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36329;

Registro36329 crear_registro36329(int id) {
    Registro36329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
