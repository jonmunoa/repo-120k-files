// fichero 38773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38773;

Registro38773 crear_registro38773(int id) {
    Registro38773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
