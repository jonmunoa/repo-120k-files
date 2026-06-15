// fichero 22353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22353;

Registro22353 crear_registro22353(int id) {
    Registro22353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
