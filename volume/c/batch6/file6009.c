// fichero 6009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6009;

Registro6009 crear_registro6009(int id) {
    Registro6009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
