// fichero 40613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40613;

Registro40613 crear_registro40613(int id) {
    Registro40613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
