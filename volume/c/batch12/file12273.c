// fichero 12273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12273;

Registro12273 crear_registro12273(int id) {
    Registro12273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
