// fichero 1341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1341;

Registro1341 crear_registro1341(int id) {
    Registro1341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
