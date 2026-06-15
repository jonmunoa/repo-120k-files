// fichero 1413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1413;

Registro1413 crear_registro1413(int id) {
    Registro1413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
