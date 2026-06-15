// fichero 17437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17437;

Registro17437 crear_registro17437(int id) {
    Registro17437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
