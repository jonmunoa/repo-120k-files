// fichero 4497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4497;

Registro4497 crear_registro4497(int id) {
    Registro4497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
