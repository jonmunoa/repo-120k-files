// fichero 1605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1605;

Registro1605 crear_registro1605(int id) {
    Registro1605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
