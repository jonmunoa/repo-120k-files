// fichero 2881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2881;

Registro2881 crear_registro2881(int id) {
    Registro2881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
