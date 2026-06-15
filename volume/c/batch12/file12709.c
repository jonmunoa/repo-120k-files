// fichero 12709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12709;

Registro12709 crear_registro12709(int id) {
    Registro12709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
