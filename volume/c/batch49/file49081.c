// fichero 49081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49081;

Registro49081 crear_registro49081(int id) {
    Registro49081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
