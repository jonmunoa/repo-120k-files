// fichero 22941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22941;

Registro22941 crear_registro22941(int id) {
    Registro22941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
