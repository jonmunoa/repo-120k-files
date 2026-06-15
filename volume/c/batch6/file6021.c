// fichero 6021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6021;

Registro6021 crear_registro6021(int id) {
    Registro6021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
