// fichero 47009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47009;

Registro47009 crear_registro47009(int id) {
    Registro47009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
