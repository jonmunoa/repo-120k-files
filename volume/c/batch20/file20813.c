// fichero 20813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20813;

Registro20813 crear_registro20813(int id) {
    Registro20813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
