// fichero 1941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1941;

Registro1941 crear_registro1941(int id) {
    Registro1941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
