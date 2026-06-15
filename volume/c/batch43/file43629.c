// fichero 43629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43629;

Registro43629 crear_registro43629(int id) {
    Registro43629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
