// fichero 1285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1285;

Registro1285 crear_registro1285(int id) {
    Registro1285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
