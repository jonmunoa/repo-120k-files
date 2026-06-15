// fichero 1629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1629;

Registro1629 crear_registro1629(int id) {
    Registro1629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
