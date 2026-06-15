// fichero 1549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1549;

Registro1549 crear_registro1549(int id) {
    Registro1549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
