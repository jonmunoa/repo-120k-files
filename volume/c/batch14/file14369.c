// fichero 14369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14369;

Registro14369 crear_registro14369(int id) {
    Registro14369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
