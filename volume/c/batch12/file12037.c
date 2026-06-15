// fichero 12037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12037;

Registro12037 crear_registro12037(int id) {
    Registro12037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
