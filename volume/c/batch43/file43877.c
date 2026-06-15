// fichero 43877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43877;

Registro43877 crear_registro43877(int id) {
    Registro43877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
