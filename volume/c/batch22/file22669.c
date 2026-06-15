// fichero 22669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22669;

Registro22669 crear_registro22669(int id) {
    Registro22669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
