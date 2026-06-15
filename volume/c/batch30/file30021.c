// fichero 30021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30021;

Registro30021 crear_registro30021(int id) {
    Registro30021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
