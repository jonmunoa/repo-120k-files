// fichero 30549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30549;

Registro30549 crear_registro30549(int id) {
    Registro30549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
