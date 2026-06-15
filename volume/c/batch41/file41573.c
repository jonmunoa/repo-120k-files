// fichero 41573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41573;

Registro41573 crear_registro41573(int id) {
    Registro41573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
