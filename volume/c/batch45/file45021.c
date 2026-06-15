// fichero 45021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45021;

Registro45021 crear_registro45021(int id) {
    Registro45021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
