// fichero 13913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13913;

Registro13913 crear_registro13913(int id) {
    Registro13913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
