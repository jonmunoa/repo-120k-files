// fichero 26513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26513;

Registro26513 crear_registro26513(int id) {
    Registro26513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
