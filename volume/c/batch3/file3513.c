// fichero 3513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3513;

Registro3513 crear_registro3513(int id) {
    Registro3513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
