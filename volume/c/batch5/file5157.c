// fichero 5157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5157;

Registro5157 crear_registro5157(int id) {
    Registro5157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
