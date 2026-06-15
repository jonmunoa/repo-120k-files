// fichero 19225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19225;

Registro19225 crear_registro19225(int id) {
    Registro19225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
