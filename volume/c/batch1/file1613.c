// fichero 1613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1613;

Registro1613 crear_registro1613(int id) {
    Registro1613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
