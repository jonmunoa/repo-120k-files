// fichero 26689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26689;

Registro26689 crear_registro26689(int id) {
    Registro26689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
