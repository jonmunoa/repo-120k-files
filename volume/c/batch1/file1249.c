// fichero 1249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1249;

Registro1249 crear_registro1249(int id) {
    Registro1249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
