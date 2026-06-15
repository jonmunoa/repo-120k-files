// fichero 38617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38617;

Registro38617 crear_registro38617(int id) {
    Registro38617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
