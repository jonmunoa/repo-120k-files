// fichero 19969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19969;

Registro19969 crear_registro19969(int id) {
    Registro19969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
