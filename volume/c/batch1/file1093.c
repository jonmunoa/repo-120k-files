// fichero 1093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1093;

Registro1093 crear_registro1093(int id) {
    Registro1093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
