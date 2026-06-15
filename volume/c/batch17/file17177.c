// fichero 17177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17177;

Registro17177 crear_registro17177(int id) {
    Registro17177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
