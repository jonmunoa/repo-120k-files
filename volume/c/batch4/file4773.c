// fichero 4773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4773;

Registro4773 crear_registro4773(int id) {
    Registro4773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
