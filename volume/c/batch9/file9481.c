// fichero 9481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9481;

Registro9481 crear_registro9481(int id) {
    Registro9481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
