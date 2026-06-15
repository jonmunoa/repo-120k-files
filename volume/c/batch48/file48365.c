// fichero 48365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48365;

Registro48365 crear_registro48365(int id) {
    Registro48365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
