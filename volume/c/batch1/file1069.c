// fichero 1069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1069;

Registro1069 crear_registro1069(int id) {
    Registro1069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
