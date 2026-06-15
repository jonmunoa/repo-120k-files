// fichero 8157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8157;

Registro8157 crear_registro8157(int id) {
    Registro8157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
