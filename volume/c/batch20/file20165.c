// fichero 20165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20165;

Registro20165 crear_registro20165(int id) {
    Registro20165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
