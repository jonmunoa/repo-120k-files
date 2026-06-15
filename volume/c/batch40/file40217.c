// fichero 40217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40217;

Registro40217 crear_registro40217(int id) {
    Registro40217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
