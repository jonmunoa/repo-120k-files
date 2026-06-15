// fichero 225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro225;

Registro225 crear_registro225(int id) {
    Registro225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
