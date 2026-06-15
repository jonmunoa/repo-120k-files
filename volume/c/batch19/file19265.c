// fichero 19265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19265;

Registro19265 crear_registro19265(int id) {
    Registro19265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
