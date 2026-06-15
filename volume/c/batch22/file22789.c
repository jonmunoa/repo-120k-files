// fichero 22789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22789;

Registro22789 crear_registro22789(int id) {
    Registro22789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
