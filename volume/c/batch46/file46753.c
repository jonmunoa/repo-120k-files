// fichero 46753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46753;

Registro46753 crear_registro46753(int id) {
    Registro46753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
