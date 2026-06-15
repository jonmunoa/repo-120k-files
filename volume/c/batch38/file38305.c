// fichero 38305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38305;

Registro38305 crear_registro38305(int id) {
    Registro38305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
