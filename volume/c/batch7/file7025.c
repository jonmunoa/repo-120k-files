// fichero 7025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7025;

Registro7025 crear_registro7025(int id) {
    Registro7025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
