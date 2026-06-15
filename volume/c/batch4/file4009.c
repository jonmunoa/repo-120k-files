// fichero 4009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4009;

Registro4009 crear_registro4009(int id) {
    Registro4009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
