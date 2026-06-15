// fichero 1065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1065;

Registro1065 crear_registro1065(int id) {
    Registro1065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
