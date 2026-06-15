// fichero 12329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12329;

Registro12329 crear_registro12329(int id) {
    Registro12329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
