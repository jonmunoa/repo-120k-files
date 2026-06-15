// fichero 47045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47045;

Registro47045 crear_registro47045(int id) {
    Registro47045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
