// fichero 1165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1165;

Registro1165 crear_registro1165(int id) {
    Registro1165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
