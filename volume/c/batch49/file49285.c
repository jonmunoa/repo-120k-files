// fichero 49285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49285;

Registro49285 crear_registro49285(int id) {
    Registro49285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
