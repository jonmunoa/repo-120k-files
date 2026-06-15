// fichero 14005 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14005;

Registro14005 crear_registro14005(int id) {
    Registro14005 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
