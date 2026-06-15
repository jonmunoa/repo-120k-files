// fichero 41329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41329;

Registro41329 crear_registro41329(int id) {
    Registro41329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
