// fichero 34185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34185;

Registro34185 crear_registro34185(int id) {
    Registro34185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
