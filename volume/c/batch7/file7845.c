// fichero 7845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7845;

Registro7845 crear_registro7845(int id) {
    Registro7845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
