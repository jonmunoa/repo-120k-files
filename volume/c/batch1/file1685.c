// fichero 1685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1685;

Registro1685 crear_registro1685(int id) {
    Registro1685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
