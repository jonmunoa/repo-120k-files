// fichero 20601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20601;

Registro20601 crear_registro20601(int id) {
    Registro20601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
