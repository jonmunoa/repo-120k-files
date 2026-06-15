// fichero 5549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5549;

Registro5549 crear_registro5549(int id) {
    Registro5549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
