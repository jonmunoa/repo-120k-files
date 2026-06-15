// fichero 15773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15773;

Registro15773 crear_registro15773(int id) {
    Registro15773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
