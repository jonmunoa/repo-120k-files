// fichero 31433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31433;

Registro31433 crear_registro31433(int id) {
    Registro31433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
