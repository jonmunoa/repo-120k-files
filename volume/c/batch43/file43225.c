// fichero 43225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43225;

Registro43225 crear_registro43225(int id) {
    Registro43225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
