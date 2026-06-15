// fichero 18257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18257;

Registro18257 crear_registro18257(int id) {
    Registro18257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
