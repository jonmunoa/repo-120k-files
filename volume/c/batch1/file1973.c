// fichero 1973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1973;

Registro1973 crear_registro1973(int id) {
    Registro1973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
