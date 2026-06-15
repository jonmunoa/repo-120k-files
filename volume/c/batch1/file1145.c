// fichero 1145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1145;

Registro1145 crear_registro1145(int id) {
    Registro1145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
