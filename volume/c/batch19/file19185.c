// fichero 19185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19185;

Registro19185 crear_registro19185(int id) {
    Registro19185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
