// fichero 1325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1325;

Registro1325 crear_registro1325(int id) {
    Registro1325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
