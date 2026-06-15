// fichero 3973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3973;

Registro3973 crear_registro3973(int id) {
    Registro3973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
