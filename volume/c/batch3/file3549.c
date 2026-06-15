// fichero 3549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3549;

Registro3549 crear_registro3549(int id) {
    Registro3549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
