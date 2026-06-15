// fichero 33009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33009;

Registro33009 crear_registro33009(int id) {
    Registro33009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
