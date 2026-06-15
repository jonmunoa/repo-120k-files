// fichero 44157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44157;

Registro44157 crear_registro44157(int id) {
    Registro44157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
