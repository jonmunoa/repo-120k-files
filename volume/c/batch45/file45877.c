// fichero 45877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45877;

Registro45877 crear_registro45877(int id) {
    Registro45877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
