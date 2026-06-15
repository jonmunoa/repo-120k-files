// fichero 34021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34021;

Registro34021 crear_registro34021(int id) {
    Registro34021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
