// fichero 43697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43697;

Registro43697 crear_registro43697(int id) {
    Registro43697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
