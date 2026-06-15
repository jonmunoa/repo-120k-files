// fichero 20081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20081;

Registro20081 crear_registro20081(int id) {
    Registro20081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
