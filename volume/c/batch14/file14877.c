// fichero 14877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14877;

Registro14877 crear_registro14877(int id) {
    Registro14877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
