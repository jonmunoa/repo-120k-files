// fichero 33581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33581;

Registro33581 crear_registro33581(int id) {
    Registro33581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
