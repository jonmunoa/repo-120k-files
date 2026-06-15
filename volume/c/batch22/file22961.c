// fichero 22961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22961;

Registro22961 crear_registro22961(int id) {
    Registro22961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
