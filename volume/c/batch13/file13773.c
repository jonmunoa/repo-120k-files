// fichero 13773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13773;

Registro13773 crear_registro13773(int id) {
    Registro13773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
