// fichero 17009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17009;

Registro17009 crear_registro17009(int id) {
    Registro17009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
