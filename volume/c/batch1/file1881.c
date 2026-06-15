// fichero 1881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1881;

Registro1881 crear_registro1881(int id) {
    Registro1881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
