// fichero 17173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17173;

Registro17173 crear_registro17173(int id) {
    Registro17173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
