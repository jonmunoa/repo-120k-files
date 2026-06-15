// fichero 33773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33773;

Registro33773 crear_registro33773(int id) {
    Registro33773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
