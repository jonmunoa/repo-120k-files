// fichero 43873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43873;

Registro43873 crear_registro43873(int id) {
    Registro43873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
