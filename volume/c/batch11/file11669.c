// fichero 11669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11669;

Registro11669 crear_registro11669(int id) {
    Registro11669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
