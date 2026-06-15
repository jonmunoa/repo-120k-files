// fichero 27145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27145;

Registro27145 crear_registro27145(int id) {
    Registro27145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
