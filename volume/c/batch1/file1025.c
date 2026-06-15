// fichero 1025 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1025;

Registro1025 crear_registro1025(int id) {
    Registro1025 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
