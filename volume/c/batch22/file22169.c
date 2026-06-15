// fichero 22169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22169;

Registro22169 crear_registro22169(int id) {
    Registro22169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
