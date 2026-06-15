// fichero 685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro685;

Registro685 crear_registro685(int id) {
    Registro685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
