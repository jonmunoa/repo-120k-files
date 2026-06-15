// fichero 15753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15753;

Registro15753 crear_registro15753(int id) {
    Registro15753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
