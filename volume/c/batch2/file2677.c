// fichero 2677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2677;

Registro2677 crear_registro2677(int id) {
    Registro2677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
