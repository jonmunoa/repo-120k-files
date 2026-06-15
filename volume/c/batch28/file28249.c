// fichero 28249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28249;

Registro28249 crear_registro28249(int id) {
    Registro28249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
