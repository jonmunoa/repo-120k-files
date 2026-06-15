// fichero 35549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35549;

Registro35549 crear_registro35549(int id) {
    Registro35549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
