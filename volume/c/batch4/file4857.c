// fichero 4857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4857;

Registro4857 crear_registro4857(int id) {
    Registro4857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
