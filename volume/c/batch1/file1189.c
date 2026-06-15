// fichero 1189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1189;

Registro1189 crear_registro1189(int id) {
    Registro1189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
