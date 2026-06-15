// fichero 45033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45033;

Registro45033 crear_registro45033(int id) {
    Registro45033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
