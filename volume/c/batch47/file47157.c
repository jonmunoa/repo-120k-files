// fichero 47157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47157;

Registro47157 crear_registro47157(int id) {
    Registro47157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
