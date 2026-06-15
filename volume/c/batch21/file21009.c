// fichero 21009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21009;

Registro21009 crear_registro21009(int id) {
    Registro21009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
