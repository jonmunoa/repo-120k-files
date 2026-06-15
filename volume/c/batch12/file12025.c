// fichero 12025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12025;

Registro12025 crear_registro12025(int id) {
    Registro12025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
