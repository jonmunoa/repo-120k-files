// fichero 49009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49009;

Registro49009 crear_registro49009(int id) {
    Registro49009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
