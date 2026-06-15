// fichero 30009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30009;

Registro30009 crear_registro30009(int id) {
    Registro30009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
