// fichero 44353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44353;

Registro44353 crear_registro44353(int id) {
    Registro44353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
