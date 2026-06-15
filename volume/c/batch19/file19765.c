// fichero 19765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19765;

Registro19765 crear_registro19765(int id) {
    Registro19765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
