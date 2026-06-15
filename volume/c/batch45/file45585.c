// fichero 45585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45585;

Registro45585 crear_registro45585(int id) {
    Registro45585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
