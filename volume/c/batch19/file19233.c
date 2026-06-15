// fichero 19233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19233;

Registro19233 crear_registro19233(int id) {
    Registro19233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
