// fichero 1501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1501;

Registro1501 crear_registro1501(int id) {
    Registro1501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
