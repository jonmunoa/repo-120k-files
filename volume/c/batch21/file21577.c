// fichero 21577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21577;

Registro21577 crear_registro21577(int id) {
    Registro21577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
