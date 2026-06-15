// fichero 43753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43753;

Registro43753 crear_registro43753(int id) {
    Registro43753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
