// fichero 15629 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15629;

Registro15629 crear_registro15629(int id) {
    Registro15629 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
