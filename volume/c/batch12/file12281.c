// fichero 12281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12281;

Registro12281 crear_registro12281(int id) {
    Registro12281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
