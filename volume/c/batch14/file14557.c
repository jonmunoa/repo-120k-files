// fichero 14557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14557;

Registro14557 crear_registro14557(int id) {
    Registro14557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
