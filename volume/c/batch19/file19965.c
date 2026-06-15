// fichero 19965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19965;

Registro19965 crear_registro19965(int id) {
    Registro19965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
