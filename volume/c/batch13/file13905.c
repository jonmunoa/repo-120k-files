// fichero 13905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13905;

Registro13905 crear_registro13905(int id) {
    Registro13905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
