// fichero 13753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13753;

Registro13753 crear_registro13753(int id) {
    Registro13753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
