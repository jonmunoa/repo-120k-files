// fichero 1293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1293;

Registro1293 crear_registro1293(int id) {
    Registro1293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
