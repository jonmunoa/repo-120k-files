// fichero 21113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21113;

Registro21113 crear_registro21113(int id) {
    Registro21113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
