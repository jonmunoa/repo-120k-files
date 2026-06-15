// fichero 14077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14077;

Registro14077 crear_registro14077(int id) {
    Registro14077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
