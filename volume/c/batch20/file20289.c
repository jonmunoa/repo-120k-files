// fichero 20289 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20289;

Registro20289 crear_registro20289(int id) {
    Registro20289 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
