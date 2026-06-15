// fichero 14361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14361;

Registro14361 crear_registro14361(int id) {
    Registro14361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
