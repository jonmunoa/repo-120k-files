// fichero 8929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8929;

Registro8929 crear_registro8929(int id) {
    Registro8929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
