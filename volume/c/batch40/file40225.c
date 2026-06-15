// fichero 40225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40225;

Registro40225 crear_registro40225(int id) {
    Registro40225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
