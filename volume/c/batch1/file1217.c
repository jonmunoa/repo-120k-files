// fichero 1217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1217;

Registro1217 crear_registro1217(int id) {
    Registro1217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
