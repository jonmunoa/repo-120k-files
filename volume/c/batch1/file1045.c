// fichero 1045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1045;

Registro1045 crear_registro1045(int id) {
    Registro1045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
