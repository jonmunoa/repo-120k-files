// fichero 22009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22009;

Registro22009 crear_registro22009(int id) {
    Registro22009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
