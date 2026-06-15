// fichero 14789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14789;

Registro14789 crear_registro14789(int id) {
    Registro14789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
