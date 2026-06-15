// fichero 45345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45345;

Registro45345 crear_registro45345(int id) {
    Registro45345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
