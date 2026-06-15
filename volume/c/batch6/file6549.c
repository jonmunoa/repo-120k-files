// fichero 6549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6549;

Registro6549 crear_registro6549(int id) {
    Registro6549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
