// fichero 24549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24549;

Registro24549 crear_registro24549(int id) {
    Registro24549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
