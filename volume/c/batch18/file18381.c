// fichero 18381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18381;

Registro18381 crear_registro18381(int id) {
    Registro18381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
