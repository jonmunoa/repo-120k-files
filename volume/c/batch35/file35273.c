// fichero 35273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35273;

Registro35273 crear_registro35273(int id) {
    Registro35273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
