// fichero 19885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19885;

Registro19885 crear_registro19885(int id) {
    Registro19885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
