// fichero 3009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3009;

Registro3009 crear_registro3009(int id) {
    Registro3009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
