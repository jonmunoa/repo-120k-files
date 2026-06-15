// fichero 46021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46021;

Registro46021 crear_registro46021(int id) {
    Registro46021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
