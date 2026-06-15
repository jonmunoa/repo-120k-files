// fichero 2265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2265;

Registro2265 crear_registro2265(int id) {
    Registro2265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
