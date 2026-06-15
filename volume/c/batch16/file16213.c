// fichero 16213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16213;

Registro16213 crear_registro16213(int id) {
    Registro16213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
