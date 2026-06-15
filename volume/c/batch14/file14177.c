// fichero 14177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14177;

Registro14177 crear_registro14177(int id) {
    Registro14177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
