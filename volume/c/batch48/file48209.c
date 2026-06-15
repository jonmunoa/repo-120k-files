// fichero 48209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48209;

Registro48209 crear_registro48209(int id) {
    Registro48209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
