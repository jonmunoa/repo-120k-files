// fichero 1061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1061;

Registro1061 crear_registro1061(int id) {
    Registro1061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
