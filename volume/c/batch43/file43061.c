// fichero 43061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43061;

Registro43061 crear_registro43061(int id) {
    Registro43061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
