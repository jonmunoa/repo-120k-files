// fichero 22949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22949;

Registro22949 crear_registro22949(int id) {
    Registro22949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
