// fichero 32513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32513;

Registro32513 crear_registro32513(int id) {
    Registro32513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
