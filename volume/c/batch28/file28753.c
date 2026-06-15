// fichero 28753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28753;

Registro28753 crear_registro28753(int id) {
    Registro28753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
