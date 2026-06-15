// fichero 28929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28929;

Registro28929 crear_registro28929(int id) {
    Registro28929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
