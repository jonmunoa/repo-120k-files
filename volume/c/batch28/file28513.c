// fichero 28513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28513;

Registro28513 crear_registro28513(int id) {
    Registro28513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
