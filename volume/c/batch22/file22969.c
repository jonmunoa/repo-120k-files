// fichero 22969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22969;

Registro22969 crear_registro22969(int id) {
    Registro22969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
