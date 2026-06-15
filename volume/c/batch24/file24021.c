// fichero 24021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24021;

Registro24021 crear_registro24021(int id) {
    Registro24021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
