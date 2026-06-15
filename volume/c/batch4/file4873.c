// fichero 4873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4873;

Registro4873 crear_registro4873(int id) {
    Registro4873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
