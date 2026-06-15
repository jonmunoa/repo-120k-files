// fichero 5773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5773;

Registro5773 crear_registro5773(int id) {
    Registro5773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
