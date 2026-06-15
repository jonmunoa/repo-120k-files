// fichero 5369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5369;

Registro5369 crear_registro5369(int id) {
    Registro5369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
