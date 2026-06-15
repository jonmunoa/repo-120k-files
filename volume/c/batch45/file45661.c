// fichero 45661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45661;

Registro45661 crear_registro45661(int id) {
    Registro45661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
