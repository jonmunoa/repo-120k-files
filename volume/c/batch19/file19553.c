// fichero 19553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19553;

Registro19553 crear_registro19553(int id) {
    Registro19553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
