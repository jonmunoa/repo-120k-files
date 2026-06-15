// fichero 47061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47061;

Registro47061 crear_registro47061(int id) {
    Registro47061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
