// fichero 14101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14101;

Registro14101 crear_registro14101(int id) {
    Registro14101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
