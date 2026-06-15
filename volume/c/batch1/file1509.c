// fichero 1509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1509;

Registro1509 crear_registro1509(int id) {
    Registro1509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
