// fichero 14009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14009;

Registro14009 crear_registro14009(int id) {
    Registro14009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
