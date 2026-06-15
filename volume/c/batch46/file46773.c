// fichero 46773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46773;

Registro46773 crear_registro46773(int id) {
    Registro46773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
