// fichero 25009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25009;

Registro25009 crear_registro25009(int id) {
    Registro25009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
