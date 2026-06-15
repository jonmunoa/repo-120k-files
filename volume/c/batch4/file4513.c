// fichero 4513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4513;

Registro4513 crear_registro4513(int id) {
    Registro4513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
