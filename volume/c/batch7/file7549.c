// fichero 7549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7549;

Registro7549 crear_registro7549(int id) {
    Registro7549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
