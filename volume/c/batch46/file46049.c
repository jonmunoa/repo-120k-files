// fichero 46049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46049;

Registro46049 crear_registro46049(int id) {
    Registro46049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
