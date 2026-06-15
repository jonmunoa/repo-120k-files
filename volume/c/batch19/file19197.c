// fichero 19197 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19197;

Registro19197 crear_registro19197(int id) {
    Registro19197 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
