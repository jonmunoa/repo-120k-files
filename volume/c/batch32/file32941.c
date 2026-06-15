// fichero 32941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32941;

Registro32941 crear_registro32941(int id) {
    Registro32941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
