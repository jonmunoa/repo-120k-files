// fichero 20225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20225;

Registro20225 crear_registro20225(int id) {
    Registro20225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
