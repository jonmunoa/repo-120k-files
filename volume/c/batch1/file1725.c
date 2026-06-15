// fichero 1725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1725;

Registro1725 crear_registro1725(int id) {
    Registro1725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
