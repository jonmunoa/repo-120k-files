// fichero 18753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18753;

Registro18753 crear_registro18753(int id) {
    Registro18753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
