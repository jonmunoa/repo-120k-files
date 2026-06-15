// fichero 45121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45121;

Registro45121 crear_registro45121(int id) {
    Registro45121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
