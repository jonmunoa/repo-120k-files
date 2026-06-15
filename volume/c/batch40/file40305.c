// fichero 40305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40305;

Registro40305 crear_registro40305(int id) {
    Registro40305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
