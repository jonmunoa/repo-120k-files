// fichero 1073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1073;

Registro1073 crear_registro1073(int id) {
    Registro1073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
