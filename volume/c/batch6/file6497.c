// fichero 6497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6497;

Registro6497 crear_registro6497(int id) {
    Registro6497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
