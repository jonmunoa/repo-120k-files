// fichero 513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro513;

Registro513 crear_registro513(int id) {
    Registro513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
