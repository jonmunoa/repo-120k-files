// fichero 19113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19113;

Registro19113 crear_registro19113(int id) {
    Registro19113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
