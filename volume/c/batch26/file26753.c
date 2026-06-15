// fichero 26753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26753;

Registro26753 crear_registro26753(int id) {
    Registro26753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
