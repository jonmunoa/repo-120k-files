// fichero 22165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22165;

Registro22165 crear_registro22165(int id) {
    Registro22165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
