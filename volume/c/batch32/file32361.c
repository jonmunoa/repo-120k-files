// fichero 32361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32361;

Registro32361 crear_registro32361(int id) {
    Registro32361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
