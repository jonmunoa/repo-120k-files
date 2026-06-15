// fichero 44021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44021;

Registro44021 crear_registro44021(int id) {
    Registro44021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
