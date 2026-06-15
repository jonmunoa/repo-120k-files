// fichero 1825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1825;

Registro1825 crear_registro1825(int id) {
    Registro1825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
