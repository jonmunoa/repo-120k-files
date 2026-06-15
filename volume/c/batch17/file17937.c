// fichero 17937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17937;

Registro17937 crear_registro17937(int id) {
    Registro17937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
