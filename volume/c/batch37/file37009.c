// fichero 37009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37009;

Registro37009 crear_registro37009(int id) {
    Registro37009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
