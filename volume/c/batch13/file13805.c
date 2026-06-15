// fichero 13805 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13805;

Registro13805 crear_registro13805(int id) {
    Registro13805 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
