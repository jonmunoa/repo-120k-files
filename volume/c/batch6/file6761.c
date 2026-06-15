// fichero 6761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6761;

Registro6761 crear_registro6761(int id) {
    Registro6761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
