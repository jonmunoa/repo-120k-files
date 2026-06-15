// fichero 10537 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10537;

Registro10537 crear_registro10537(int id) {
    Registro10537 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
