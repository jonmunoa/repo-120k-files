// fichero 10157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10157;

Registro10157 crear_registro10157(int id) {
    Registro10157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
