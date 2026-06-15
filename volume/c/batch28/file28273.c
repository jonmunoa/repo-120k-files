// fichero 28273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28273;

Registro28273 crear_registro28273(int id) {
    Registro28273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
