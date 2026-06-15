// fichero 10409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10409;

Registro10409 crear_registro10409(int id) {
    Registro10409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
