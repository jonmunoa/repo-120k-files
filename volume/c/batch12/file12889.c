// fichero 12889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12889;

Registro12889 crear_registro12889(int id) {
    Registro12889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
