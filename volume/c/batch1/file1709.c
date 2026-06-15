// fichero 1709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1709;

Registro1709 crear_registro1709(int id) {
    Registro1709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
