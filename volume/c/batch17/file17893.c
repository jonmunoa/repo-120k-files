// fichero 17893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17893;

Registro17893 crear_registro17893(int id) {
    Registro17893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
