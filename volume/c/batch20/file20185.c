// fichero 20185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20185;

Registro20185 crear_registro20185(int id) {
    Registro20185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
