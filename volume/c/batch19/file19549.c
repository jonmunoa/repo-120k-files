// fichero 19549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19549;

Registro19549 crear_registro19549(int id) {
    Registro19549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
