// fichero 14029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14029;

Registro14029 crear_registro14029(int id) {
    Registro14029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
