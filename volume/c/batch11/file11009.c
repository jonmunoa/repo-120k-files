// fichero 11009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11009;

Registro11009 crear_registro11009(int id) {
    Registro11009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
