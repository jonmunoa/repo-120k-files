// fichero 33045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33045;

Registro33045 crear_registro33045(int id) {
    Registro33045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
