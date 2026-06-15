// fichero 46697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46697;

Registro46697 crear_registro46697(int id) {
    Registro46697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
