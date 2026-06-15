// fichero 15193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15193;

Registro15193 crear_registro15193(int id) {
    Registro15193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
