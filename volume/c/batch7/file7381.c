// fichero 7381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7381;

Registro7381 crear_registro7381(int id) {
    Registro7381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
