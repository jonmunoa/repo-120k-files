// fichero 19105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19105;

Registro19105 crear_registro19105(int id) {
    Registro19105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
