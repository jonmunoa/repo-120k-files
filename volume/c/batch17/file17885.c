// fichero 17885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17885;

Registro17885 crear_registro17885(int id) {
    Registro17885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
