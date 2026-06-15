// fichero 46149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46149;

Registro46149 crear_registro46149(int id) {
    Registro46149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
