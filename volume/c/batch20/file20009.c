// fichero 20009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20009;

Registro20009 crear_registro20009(int id) {
    Registro20009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
