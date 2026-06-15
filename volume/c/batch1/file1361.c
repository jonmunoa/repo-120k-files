// fichero 1361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1361;

Registro1361 crear_registro1361(int id) {
    Registro1361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
