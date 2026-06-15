// fichero 3221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3221;

Registro3221 crear_registro3221(int id) {
    Registro3221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
