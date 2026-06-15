// fichero 19753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19753;

Registro19753 crear_registro19753(int id) {
    Registro19753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
