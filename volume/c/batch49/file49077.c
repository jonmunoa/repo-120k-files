// fichero 49077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49077;

Registro49077 crear_registro49077(int id) {
    Registro49077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
