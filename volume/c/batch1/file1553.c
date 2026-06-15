// fichero 1553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1553;

Registro1553 crear_registro1553(int id) {
    Registro1553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
