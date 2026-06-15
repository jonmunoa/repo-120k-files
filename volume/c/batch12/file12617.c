// fichero 12617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12617;

Registro12617 crear_registro12617(int id) {
    Registro12617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
