// fichero 46865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46865;

Registro46865 crear_registro46865(int id) {
    Registro46865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
