// fichero 12413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12413;

Registro12413 crear_registro12413(int id) {
    Registro12413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
