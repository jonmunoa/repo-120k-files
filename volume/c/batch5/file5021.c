// fichero 5021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5021;

Registro5021 crear_registro5021(int id) {
    Registro5021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
