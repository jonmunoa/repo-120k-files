// fichero 15905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15905;

Registro15905 crear_registro15905(int id) {
    Registro15905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
