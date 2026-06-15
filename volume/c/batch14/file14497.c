// fichero 14497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14497;

Registro14497 crear_registro14497(int id) {
    Registro14497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
