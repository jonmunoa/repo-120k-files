// fichero 14137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14137;

Registro14137 crear_registro14137(int id) {
    Registro14137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
