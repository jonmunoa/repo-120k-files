// fichero 1233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1233;

Registro1233 crear_registro1233(int id) {
    Registro1233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
