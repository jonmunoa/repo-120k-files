// fichero 21437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21437;

Registro21437 crear_registro21437(int id) {
    Registro21437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
