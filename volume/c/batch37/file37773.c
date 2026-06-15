// fichero 37773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37773;

Registro37773 crear_registro37773(int id) {
    Registro37773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
