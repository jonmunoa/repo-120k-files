// fichero 49021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49021;

Registro49021 crear_registro49021(int id) {
    Registro49021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
