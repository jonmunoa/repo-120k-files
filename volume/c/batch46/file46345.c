// fichero 46345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46345;

Registro46345 crear_registro46345(int id) {
    Registro46345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
