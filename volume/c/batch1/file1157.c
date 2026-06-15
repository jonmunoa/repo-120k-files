// fichero 1157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1157;

Registro1157 crear_registro1157(int id) {
    Registro1157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
