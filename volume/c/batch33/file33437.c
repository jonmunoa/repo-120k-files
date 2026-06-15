// fichero 33437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33437;

Registro33437 crear_registro33437(int id) {
    Registro33437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
