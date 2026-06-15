// fichero 21729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21729;

Registro21729 crear_registro21729(int id) {
    Registro21729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
