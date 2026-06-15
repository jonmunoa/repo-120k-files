// fichero 32345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32345;

Registro32345 crear_registro32345(int id) {
    Registro32345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
