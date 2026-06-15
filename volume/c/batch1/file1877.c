// fichero 1877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1877;

Registro1877 crear_registro1877(int id) {
    Registro1877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
