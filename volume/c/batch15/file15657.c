// fichero 15657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15657;

Registro15657 crear_registro15657(int id) {
    Registro15657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
