// fichero 1641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1641;

Registro1641 crear_registro1641(int id) {
    Registro1641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
